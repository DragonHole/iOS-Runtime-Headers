/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconViewQuerying
@required
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
-(BOOL)isDisplayingIconView:(id)arg1;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
-(id)firstIconViewForIcon:(id)arg1;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
-(BOOL)isDisplayingIcon:(id)arg1;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1;

@end

