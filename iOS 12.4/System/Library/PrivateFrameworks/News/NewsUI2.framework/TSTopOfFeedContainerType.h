/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTopOfFeedContainerType
@property (retain,nonatomic) id<TSTopOfFeedContainerTypeDelegate> delegate; 
@required
-(double)topOfFeedContentHeight;
-(id)topOfFeedContentHeadlines;
-(id)topOfFeedHeadlineContextForHeadline:(id)arg1;
-(id)topOfFeedContentTitle;
-(id)topOfFeedContentTitleColor;
-(long long)topOfFeedSpecialEventsType;
-(void)topOfFeedContentDidPresentHeadline:(id)arg1;
-(void)topOfFeedContentShouldRefreshWithCompletion:(/*^block*/id)arg1;
-(id)topOfFeedAnimatableView;
-(void)setDelegate:(id)arg1;
-(id<TSTopOfFeedContainerTypeDelegate>)delegate;

@end

