/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCommuteSessionObserver <NSObject>
@optional
-(void)commuteSessionDidArrive:(id)arg1;
-(void)commuteSession:(id)arg1 didChangeToState:(unsigned long long)arg2;

@required
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;

@end
