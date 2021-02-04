/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class ICHomographyWrapper;

@interface AutoLoopStabilizationAnalysis : NSObject {

	BOOL _wasPassThruAnalysis;
	ICHomographyWrapper* _sequentialAnalysisHomographies;
	ICHomographyWrapper* _directAnalysisHomographies;
	CGSize _inputMovieDimensions;
	SCD_Struct_Pr1 _referenceFrameTime;

}

@property (retain,readonly) ICHomographyWrapper * sequentialAnalysisHomographies;              //@synthesize sequentialAnalysisHomographies=_sequentialAnalysisHomographies - In the implementation block
@property (retain,readonly) ICHomographyWrapper * directAnalysisHomographies;                  //@synthesize directAnalysisHomographies=_directAnalysisHomographies - In the implementation block
@property (nonatomic,readonly) CGSize inputMovieDimensions;                                    //@synthesize inputMovieDimensions=_inputMovieDimensions - In the implementation block
@property (nonatomic,readonly) BOOL wasPassThruAnalysis;                                       //@synthesize wasPassThruAnalysis=_wasPassThruAnalysis - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Pr1 referenceFrameTime;                              //@synthesize referenceFrameTime=_referenceFrameTime - In the implementation block
-(id)initWithSourceHomographies:(id)arg1 DirectTripodHomographies:(id)arg2 sourceMovieSize:(CGSize)arg3 passThru:(BOOL)arg4 refFrameTime:(SCD_Struct_Pr1)arg5 ;
-(BOOL)wasPassThruAnalysis;
-(CGSize)inputMovieDimensions;
-(ICHomographyWrapper *)sequentialAnalysisHomographies;
-(ICHomographyWrapper *)directAnalysisHomographies;
-(SCD_Struct_Pr1)referenceFrameTime;
@end
