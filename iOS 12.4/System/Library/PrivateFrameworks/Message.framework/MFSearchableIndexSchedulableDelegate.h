/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFSearchableIndexSchedulableDelegate <NSObject>
@required
-(BOOL)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg1;
-(double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg1;
-(long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg1;
-(void)searchableIndexSchedulable:(id)arg1 didGenerateImportantPowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
-(void)indexingDidResumeForSearchableIndexSchedulable:(id)arg1;
-(void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg1;
-(void)searchableIndexSchedulable:(id)arg1 didIndexForTime:(double)arg2;
-(void)searchableIndexSchedulable:(id)arg1 didIndexItemCount:(long long)arg2;
-(void)searchableIndexSchedulable:(id)arg1 didGeneratePowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;

@end

