/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCheckerboardNoiseSource : GKNoiseSource {

	double _squareSize;

}

@property (assign,nonatomic) double squareSize;              //@synthesize squareSize=_squareSize - In the implementation block
+(id)checkerboardNoiseWithSquareSize:(double)arg1 ;
-(id)init;
-(id)initWithSquareSize:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(void)setSquareSize:(double)arg1 ;
-(double)squareSize;
@end

