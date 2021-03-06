/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@class NSObject, _EARSpeechRecognizer;

@interface _EARSpeechRecognitionAudioBuffer : NSObject {

	shared_ptr<quasar::RecogAudioBufferBase>* _buffer;
	NSObject*<OS_dispatch_queue> _queue;
	_EARSpeechRecognizer* _speechRecognizer;
	BOOL _cancelled;
	BOOL _ended;

}
+(void)initialize;
-(void)_detachFromRecognizer;
-(id)_initWithAudioBuffer:(shared_ptr<quasar::RecogAudioBufferBase>*)arg1 speechRecognizer:(id)arg2 ;
-(void)addAudioSampleData:(id)arg1 ;
-(void)triggerServerSideEndPointer;
-(void)endAudio;
-(void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)cancelRecognition;
@end

