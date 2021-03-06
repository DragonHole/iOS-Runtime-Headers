/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseModifier.h>

@class GKPerlinNoiseSource;

@interface GKTurbulenceNoiseModifier : GKNoiseModifier {

	double _power;
	double _frequency;
	double _roughness;
	int _seed;
	GKPerlinNoiseSource* _perlin[3];

}
-(id)cloneModule;
-(int)requiredInputModuleCount;
-(id)initWithFrequency:(double)arg1 power:(double)arg2 roughness:(double)arg3 seed:(int)arg4 ;
-(id)initWithInputModuleCount:(unsigned long long)arg1 ;
-(double)valueAt:;
-(id)init;
-(void)dealloc;
@end

