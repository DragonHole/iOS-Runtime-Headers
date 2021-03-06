/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STTableCell.h>

@class UILabel, UIImageView, STUsageGraphView;

@interface STNotificationSummaryCell : STTableCell {

	UILabel* _notificationsLabel;
	UILabel* _averageNotificationsLabel;
	UIImageView* _notificationDot;
	STUsageGraphView* _graphView;

}

@property (nonatomic,retain) UILabel * notificationsLabel;                     //@synthesize notificationsLabel=_notificationsLabel - In the implementation block
@property (nonatomic,retain) UILabel * averageNotificationsLabel;              //@synthesize averageNotificationsLabel=_averageNotificationsLabel - In the implementation block
@property (nonatomic,retain) UIImageView * notificationDot;                    //@synthesize notificationDot=_notificationDot - In the implementation block
@property (nonatomic,retain) STUsageGraphView * graphView;                     //@synthesize graphView=_graphView - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(STUsageGraphView *)graphView;
-(void)setGraphView:(STUsageGraphView *)arg1 ;
-(void)setNotificationsLabel:(UILabel *)arg1 ;
-(void)setAverageNotificationsLabel:(UILabel *)arg1 ;
-(void)setNotificationDot:(UIImageView *)arg1 ;
-(UILabel *)notificationsLabel;
-(UILabel *)averageNotificationsLabel;
-(UIImageView *)notificationDot;
-(void)setValue:(id)arg1 ;
@end

