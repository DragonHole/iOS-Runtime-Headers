/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CALayer;

@interface RCVisualWaveformAmpSlice : NSObject {

	NSMutableSet* _segments;
	double _visualAmplitudeHeight;
	double _interpolatingvisualAmplitudeHeight;
	double _interpolatingvisualAmplitudeHeightDiff;
	long long _interpolatingVisualAmplitudeHeightFrameCount;
	BOOL _needsPathUpdate;
	double _sliceIndex;
	double _amplitude;
	long long _visualAmplitudeHeightInterpolatingFrames;
	CALayer* _sliceLayer;

}

@property (assign,nonatomic) double sliceIndex;                                               //@synthesize sliceIndex=_sliceIndex - In the implementation block
@property (assign,nonatomic) double amplitude;                                                //@synthesize amplitude=_amplitude - In the implementation block
@property (assign,nonatomic) double visualAmplitudeHeight; 
@property (assign,nonatomic) long long visualAmplitudeHeightInterpolatingFrames;              //@synthesize visualAmplitudeHeightInterpolatingFrames=_visualAmplitudeHeightInterpolatingFrames - In the implementation block
@property (nonatomic,retain) CALayer * sliceLayer;                                            //@synthesize sliceLayer=_sliceLayer - In the implementation block
@property (assign,nonatomic) BOOL needsPathUpdate;                                            //@synthesize needsPathUpdate=_needsPathUpdate - In the implementation block
@property (nonatomic,readonly) BOOL segmentsAreRendered; 
-(void)clearSegments;
-(double)amplitude;
-(void)setAmplitude:(double)arg1 ;
-(void)addSegment:(id)arg1 ;
-(id)initWithIndex:(double)arg1 amplitude:(double)arg2 ;
-(void)setVisualAmplitudeHeight:(double)arg1 ;
-(double)visualAmplitudeHeight;
-(BOOL)segmentsAreRendered;
-(double)sliceIndex;
-(void)setSliceIndex:(double)arg1 ;
-(long long)visualAmplitudeHeightInterpolatingFrames;
-(void)setVisualAmplitudeHeightInterpolatingFrames:(long long)arg1 ;
-(CALayer *)sliceLayer;
-(void)setSliceLayer:(CALayer *)arg1 ;
-(BOOL)needsPathUpdate;
-(void)setNeedsPathUpdate:(BOOL)arg1 ;
-(id)init;
@end

