#include <QAudioBufferOutput>
#include <QAudioOutput>
#include <QIODevice>
#include <QMediaMetaData>
#include <QMediaPlayer>
#include <QMediaTimeRange>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QVideoSink>
#include <qmediaplayer.h>
#include "libqmediaplayer.h"
#include "libqmediaplayer.hxx"

QMediaPlayer* QMediaPlayer_new() {
	 return new QMediaPlayer();
}

QMediaPlayer* QMediaPlayer_new2(QObject* parent) {
	 return new QMediaPlayer(parent);
}

libqt_string QMediaPlayer_Tr(const char* s) {
	QString _ret = QMediaPlayer::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMediaPlayer_AudioTracks(const QMediaPlayer* self) {
	auto _ret = self->audioTracks();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QMediaPlayer_VideoTracks(const QMediaPlayer* self) {
	auto _ret = self->videoTracks();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QMediaPlayer_SubtitleTracks(const QMediaPlayer* self) {
	auto _ret = self->subtitleTracks();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

int QMediaPlayer_ActiveAudioTrack(const QMediaPlayer* self) {
	return self->activeAudioTrack();
}

int QMediaPlayer_ActiveVideoTrack(const QMediaPlayer* self) {
	return self->activeVideoTrack();
}

int QMediaPlayer_ActiveSubtitleTrack(const QMediaPlayer* self) {
	return self->activeSubtitleTrack();
}

void QMediaPlayer_SetActiveAudioTrack(QMediaPlayer* self, int index) {
	self->setActiveAudioTrack(index);
}

void QMediaPlayer_SetActiveVideoTrack(QMediaPlayer* self, int index) {
	self->setActiveVideoTrack(index);
}

void QMediaPlayer_SetActiveSubtitleTrack(QMediaPlayer* self, int index) {
	self->setActiveSubtitleTrack(index);
}

void QMediaPlayer_SetAudioBufferOutput(QMediaPlayer* self, QAudioBufferOutput* output) {
	self->setAudioBufferOutput(output);
}

QAudioBufferOutput* QMediaPlayer_AudioBufferOutput(const QMediaPlayer* self) {
	return self->audioBufferOutput();
}

void QMediaPlayer_SetAudioOutput(QMediaPlayer* self, QAudioOutput* output) {
	self->setAudioOutput(output);
}

QAudioOutput* QMediaPlayer_AudioOutput(const QMediaPlayer* self) {
	return self->audioOutput();
}

void QMediaPlayer_SetVideoOutput(QMediaPlayer* self, QObject* videoOutput) {
	self->setVideoOutput(videoOutput);
}

QObject* QMediaPlayer_VideoOutput(const QMediaPlayer* self) {
	return self->videoOutput();
}

void QMediaPlayer_SetVideoSink(QMediaPlayer* self, QVideoSink* sink) {
	self->setVideoSink(sink);
}

QVideoSink* QMediaPlayer_VideoSink(const QMediaPlayer* self) {
	return self->videoSink();
}

QUrl* QMediaPlayer_Source(const QMediaPlayer* self) {
	return new QUrl(self->source());
}

const QIODevice* QMediaPlayer_SourceDevice(const QMediaPlayer* self) {
	return self->sourceDevice();
}

int QMediaPlayer_PlaybackState(const QMediaPlayer* self) {
	return self->playbackState();
}

int QMediaPlayer_MediaStatus(const QMediaPlayer* self) {
	return self->mediaStatus();
}

long long QMediaPlayer_Duration(const QMediaPlayer* self) {
	return self->duration();
}

long long QMediaPlayer_Position(const QMediaPlayer* self) {
	return self->position();
}

bool QMediaPlayer_HasAudio(const QMediaPlayer* self) {
	return self->hasAudio();
}

bool QMediaPlayer_HasVideo(const QMediaPlayer* self) {
	return self->hasVideo();
}

float QMediaPlayer_BufferProgress(const QMediaPlayer* self) {
	return self->bufferProgress();
}

QMediaTimeRange* QMediaPlayer_BufferedTimeRange(const QMediaPlayer* self) {
	return new QMediaTimeRange(self->bufferedTimeRange());
}

bool QMediaPlayer_IsSeekable(const QMediaPlayer* self) {
	return self->isSeekable();
}

double QMediaPlayer_PlaybackRate(const QMediaPlayer* self) {
	return self->playbackRate();
}

bool QMediaPlayer_IsPlaying(const QMediaPlayer* self) {
	return self->isPlaying();
}

int QMediaPlayer_Loops(const QMediaPlayer* self) {
	return self->loops();
}

void QMediaPlayer_SetLoops(QMediaPlayer* self, int loops) {
	self->setLoops(loops);
}

int QMediaPlayer_Error(const QMediaPlayer* self) {
	return self->error();
}

libqt_string QMediaPlayer_ErrorString(const QMediaPlayer* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QMediaPlayer_IsAvailable(const QMediaPlayer* self) {
	return self->isAvailable();
}

QMediaMetaData* QMediaPlayer_MetaData(const QMediaPlayer* self) {
	return new QMediaMetaData(self->metaData());
}

void QMediaPlayer_Play(QMediaPlayer* self) {
	self->play();
}

void QMediaPlayer_Pause(QMediaPlayer* self) {
	self->pause();
}

void QMediaPlayer_Stop(QMediaPlayer* self) {
	self->stop();
}

void QMediaPlayer_SetPosition(QMediaPlayer* self, long long position) {
	self->setPosition(position);
}

void QMediaPlayer_SetPlaybackRate(QMediaPlayer* self, double rate) {
	self->setPlaybackRate(rate);
}

void QMediaPlayer_SetSource(QMediaPlayer* self, const QUrl* source) {
	self->setSource(*source);
}

void QMediaPlayer_SetSourceDevice(QMediaPlayer* self, QIODevice* device) {
	self->setSourceDevice(device);
}

void QMediaPlayer_SourceChanged(QMediaPlayer* self, const QUrl* media) {
	self->sourceChanged(*media);
}

void QMediaPlayer_Connect_SourceChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, const QUrl*) = reinterpret_cast<void (*)(QMediaPlayer*, const QUrl*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::sourceChanged, [self, slotFunc](const QUrl& media) {
	slotFunc(self, media);
    });
}

void QMediaPlayer_PlaybackStateChanged(QMediaPlayer* self, int newState) {
	self->playbackStateChanged(static_cast<QMediaPlayer::PlaybackState>(newState));
}

void QMediaPlayer_Connect_PlaybackStateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackStateChanged, [self, slotFunc](QMediaPlayer::PlaybackState newState) {
	slotFunc(self, newState);
    });
}

void QMediaPlayer_MediaStatusChanged(QMediaPlayer* self, int status) {
	self->mediaStatusChanged(static_cast<QMediaPlayer::MediaStatus>(status));
}

void QMediaPlayer_Connect_MediaStatusChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int) = reinterpret_cast<void (*)(QMediaPlayer*, int)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::mediaStatusChanged, [self, slotFunc](QMediaPlayer::MediaStatus status) {
	slotFunc(self, status);
    });
}

void QMediaPlayer_DurationChanged(QMediaPlayer* self, long long duration) {
	self->durationChanged(duration);
}

void QMediaPlayer_Connect_DurationChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::durationChanged, [self, slotFunc](qint64 duration) {
	slotFunc(self, duration);
    });
}

void QMediaPlayer_PositionChanged(QMediaPlayer* self, long long position) {
	self->positionChanged(position);
}

void QMediaPlayer_Connect_PositionChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, long long) = reinterpret_cast<void (*)(QMediaPlayer*, long long)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::positionChanged, [self, slotFunc](qint64 position) {
	slotFunc(self, position);
    });
}

void QMediaPlayer_HasAudioChanged(QMediaPlayer* self, bool available) {
	self->hasAudioChanged(available);
}

void QMediaPlayer_Connect_HasAudioChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasAudioChanged, [self, slotFunc](bool available) {
	slotFunc(self, available);
    });
}

void QMediaPlayer_HasVideoChanged(QMediaPlayer* self, bool videoAvailable) {
	self->hasVideoChanged(videoAvailable);
}

void QMediaPlayer_Connect_HasVideoChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::hasVideoChanged, [self, slotFunc](bool videoAvailable) {
	slotFunc(self, videoAvailable);
    });
}

void QMediaPlayer_BufferProgressChanged(QMediaPlayer* self, float progress) {
	self->bufferProgressChanged(progress);
}

void QMediaPlayer_Connect_BufferProgressChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, float) = reinterpret_cast<void (*)(QMediaPlayer*, float)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::bufferProgressChanged, [self, slotFunc](float progress) {
	slotFunc(self, progress);
    });
}

void QMediaPlayer_SeekableChanged(QMediaPlayer* self, bool seekable) {
	self->seekableChanged(seekable);
}

void QMediaPlayer_Connect_SeekableChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::seekableChanged, [self, slotFunc](bool seekable) {
	slotFunc(self, seekable);
    });
}

void QMediaPlayer_PlayingChanged(QMediaPlayer* self, bool playing) {
	self->playingChanged(playing);
}

void QMediaPlayer_Connect_PlayingChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, bool) = reinterpret_cast<void (*)(QMediaPlayer*, bool)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playingChanged, [self, slotFunc](bool playing) {
	slotFunc(self, playing);
    });
}

void QMediaPlayer_PlaybackRateChanged(QMediaPlayer* self, double rate) {
	self->playbackRateChanged(rate);
}

void QMediaPlayer_Connect_PlaybackRateChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, double) = reinterpret_cast<void (*)(QMediaPlayer*, double)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::playbackRateChanged, [self, slotFunc](qreal rate) {
	slotFunc(self, rate);
    });
}

void QMediaPlayer_LoopsChanged(QMediaPlayer* self) {
	self->loopsChanged();
}

void QMediaPlayer_Connect_LoopsChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::loopsChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_MetaDataChanged(QMediaPlayer* self) {
	self->metaDataChanged();
}

void QMediaPlayer_Connect_MetaDataChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::metaDataChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_VideoOutputChanged(QMediaPlayer* self) {
	self->videoOutputChanged();
}

void QMediaPlayer_Connect_VideoOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::videoOutputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_AudioOutputChanged(QMediaPlayer* self) {
	self->audioOutputChanged();
}

void QMediaPlayer_Connect_AudioOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::audioOutputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_AudioBufferOutputChanged(QMediaPlayer* self) {
	self->audioBufferOutputChanged();
}

void QMediaPlayer_Connect_AudioBufferOutputChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::audioBufferOutputChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_TracksChanged(QMediaPlayer* self) {
	self->tracksChanged();
}

void QMediaPlayer_Connect_TracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::tracksChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_ActiveTracksChanged(QMediaPlayer* self) {
	self->activeTracksChanged();
}

void QMediaPlayer_Connect_ActiveTracksChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::activeTracksChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_ErrorChanged(QMediaPlayer* self) {
	self->errorChanged();
}

void QMediaPlayer_Connect_ErrorChanged(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*) = reinterpret_cast<void (*)(QMediaPlayer*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QMediaPlayer_ErrorOccurred(QMediaPlayer* self, int errorVal, const libqt_string errorString) {
	self->errorOccurred(static_cast<QMediaPlayer::Error>(errorVal), QString::fromUtf8(errorString.data, errorString.len));
}

void QMediaPlayer_Connect_ErrorOccurred(QMediaPlayer* self, intptr_t slot) {
    void (*slotFunc)(QMediaPlayer*, int, const char*) = reinterpret_cast<void (*)(QMediaPlayer*, int, const char*)>(slot);
    QMediaPlayer::connect(self, &QMediaPlayer::errorOccurred, [self, slotFunc](QMediaPlayer::Error errorVal, const QString& errorString) {
	slotFunc(self, errorVal, errorString);
    });
}

libqt_string QMediaPlayer_Tr2(const char* s, const char* c) {
	QString _ret = QMediaPlayer::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMediaPlayer_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMediaPlayer::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QMediaPlayer_SetSourceDevice2(QMediaPlayer* self, QIODevice* device, const QUrl* sourceUrl) {
	self->setSourceDevice(device, *sourceUrl);
}

void QMediaPlayer_Delete(QMediaPlayer* self) {
    delete self;
}

