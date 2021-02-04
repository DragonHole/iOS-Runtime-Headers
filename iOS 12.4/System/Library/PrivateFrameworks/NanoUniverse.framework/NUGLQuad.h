/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoUniverse.framework/NanoUniverse
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoUniverse/NanoUniverse-Structs.h>
#import <ClockKitUI/CLKUIQuad.h>

@class NUResources, NUScene;

@interface NUGLQuad : CLKUIQuad {

	unsigned _isPrepared : 1;
	unsigned _vertexArray;
	double _baseTime;
	NUResources* _resources;
	NUScene* _scene;

}

@property (nonatomic,retain) NUScene * scene;              //@synthesize scene=_scene - In the implementation block
-(void)encodeGLforSize:(CLKUIQuadSize)arg1 ;
-(void)setScene:(NUScene *)arg1 ;
-(void)prepareForQuadView:(id)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(NUScene *)scene;
@end
