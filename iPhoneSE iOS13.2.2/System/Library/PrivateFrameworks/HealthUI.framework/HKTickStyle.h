/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKStrokeStyle.h>

@interface HKTickStyle : HKStrokeStyle {

	BOOL _shouldRenderMajorTickMarks;
	double _tickLength;
	long long _tickDirection;

}

@property (assign,nonatomic) double tickLength;                            //@synthesize tickLength=_tickLength - In the implementation block
@property (assign,nonatomic) long long tickDirection;                      //@synthesize tickDirection=_tickDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderMajorTickMarks;              //@synthesize shouldRenderMajorTickMarks=_shouldRenderMajorTickMarks - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)tickLength;
-(void)setTickLength:(double)arg1 ;
-(long long)tickDirection;
-(void)setTickDirection:(long long)arg1 ;
-(BOOL)shouldRenderMajorTickMarks;
-(void)setShouldRenderMajorTickMarks:(BOOL)arg1 ;
@end

