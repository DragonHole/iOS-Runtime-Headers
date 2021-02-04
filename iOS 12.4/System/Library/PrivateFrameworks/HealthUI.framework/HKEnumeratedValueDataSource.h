/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource {

	NSArray* _enumeratedValueOrder;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) NSArray * enumeratedValueOrder;              //@synthesize enumeratedValueOrder=_enumeratedValueOrder - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                      //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(id)_enumeratedValueOrderMapping;
-(id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2 ;
-(NSArray *)enumeratedValueOrder;
-(void)setEnumeratedValueOrder:(NSArray *)arg1 ;
@end
