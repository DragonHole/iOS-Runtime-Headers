/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HFTriggerBuilder;

@interface HFTriggerDurationSummaryItem : HFItem {

	HFTriggerBuilder* _triggerBuilder;

}

@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
+(id)formattedStringForDuration:(id)arg1 style:(unsigned long long)arg2 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
@end
