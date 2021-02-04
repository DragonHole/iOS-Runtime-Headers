/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKGraphSeriesChartData.h>

@class NSString;

@interface HKInteractiveChartHearingSensitivityData : NSObject <HKGraphSeriesChartData> {

	BOOL _isLeftEar;
	double _sensitivityDbHL;

}

@property (assign,nonatomic) double sensitivityDbHL;                //@synthesize sensitivityDbHL=_sensitivityDbHL - In the implementation block
@property (assign,nonatomic) BOOL isLeftEar;                        //@synthesize isLeftEar=_isLeftEar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLeftEar;
-(double)sensitivityDbHL;
-(void)setSensitivityDbHL:(double)arg1 ;
-(void)setIsLeftEar:(BOOL)arg1 ;
@end
