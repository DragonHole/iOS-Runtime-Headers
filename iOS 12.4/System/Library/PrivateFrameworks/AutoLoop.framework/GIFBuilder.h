/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AutoLoop/AutoLoop-Structs.h>
@class CIContext, NSDictionary;

@interface GIFBuilder : NSObject {

	CIContext* _ciCtx;
	NSDictionary* _frameProperties;
	CGImageDestinationRef _imgDest;
	double _maxRes;

}

@property (retain) CIContext * ciCtx;                           //@synthesize ciCtx=_ciCtx - In the implementation block
@property (retain) NSDictionary * frameProperties;              //@synthesize frameProperties=_frameProperties - In the implementation block
@property (assign) CGImageDestinationRef imgDest;               //@synthesize imgDest=_imgDest - In the implementation block
@property (assign) double maxRes;                               //@synthesize maxRes=_maxRes - In the implementation block
+(id)builderWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(BOOL)addImage:(id)arg1 ;
-(id)initWithContext:(id)arg1 forURL:(id)arg2 maxRes:(unsigned long long)arg3 fps:(float)arg4 ;
-(CIContext *)ciCtx;
-(void)setCiCtx:(CIContext *)arg1 ;
-(CGImageDestinationRef)imgDest;
-(void)setImgDest:(CGImageDestinationRef)arg1 ;
-(double)maxRes;
-(void)setMaxRes:(double)arg1 ;
-(void)setFrameProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)frameProperties;
-(void)dealloc;
-(BOOL)finish;
@end
