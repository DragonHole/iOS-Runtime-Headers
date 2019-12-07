/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _HKDataCollectorFlushRequest : NSObject {

	NSDate* _date;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) NSDate * date;              //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(NSDate *)date;
-(id)completion;
-(id)initWithDate:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
