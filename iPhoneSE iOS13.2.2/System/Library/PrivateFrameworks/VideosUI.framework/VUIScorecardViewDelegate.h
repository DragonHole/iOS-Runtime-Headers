/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIScorecardViewDelegate <NSObject>
@optional
-(id)backgroundImageForScorecardViewMaterial:(id)arg1;
-(int)backgroundBlendModeForScoreValueInRow:(long long)arg1 atIndex:(long long)arg2;

@required
-(long long)styleForScorecardView:(id)arg1;
-(long long)numberOfRowsInScorecardView:(id)arg1;
-(long long)numberOfScoreValuesForScorecardView:(id)arg1 inRow:(long long)arg2;
-(id)scoreValue:(id)arg1 inRow:(long long)arg2 atIndex:(long long)arg3;
-(double)maximumWidthForScorecardView:(id)arg1;

@end

