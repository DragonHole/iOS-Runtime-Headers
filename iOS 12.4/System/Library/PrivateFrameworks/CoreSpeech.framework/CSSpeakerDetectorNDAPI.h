/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSSpeakerDetectorNDAPIDelegate;
#import <CoreSpeech/CoreSpeech-Structs.h>
@class CSSpeakerModel;

@interface CSSpeakerDetectorNDAPI : NSObject {

	void* _novDetect;
	const ndresult* _lastResult;
	float _threshold;
	unsigned long long _maxSpeakerVectorsToPersist;
	CSSpeakerModel* _spkModel;
	id<CSSpeakerDetectorNDAPIDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSSpeakerDetectorNDAPIDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithAsset:(id)arg1 speakerModel:(id)arg2 ;
-(void)processSuperVector:(id)arg1 withResult:(id)arg2 ;
-(unsigned long long)getSATVectorCount;
-(unsigned long long)getMaxSpeakerVectorsToPersist;
-(BOOL)addLastTriggerToProfileWithSuperVector:(id)arg1 ;
-(id)analyzeWavForEnrollment:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(BOOL)addLastTriggerToProfile;
-(BOOL)_initializeNDAPI:(id)arg1 resourcePath:(id)arg2 ;
-(BOOL)_initializeSAT:(id)arg1 ;
-(float)_computeSATScore:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CSSpeakerDetectorNDAPIDelegate>)arg1 ;
-(id<CSSpeakerDetectorNDAPIDelegate>)delegate;
-(void)reset;
@end

