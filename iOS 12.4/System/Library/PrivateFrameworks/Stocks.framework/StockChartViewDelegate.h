/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StockChartViewDelegate <NSObject>
@optional
-(void)stockChartViewFinishedInitialLoad:(id)arg1;

@required
-(void)stockChartView:(id)arg1 chartIntervalDidChange:(long long)arg2;
-(BOOL)stockChartViewIsCurrentChartView:(id)arg1;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1;

@end

