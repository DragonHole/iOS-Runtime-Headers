/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPSPreferredFocusManaging
@property (assign,nonatomic,__weak) id<UIFocusItem> preferredFocusItem; 
@property (assign,nonatomic) BOOL usePreferredItemOnNextUpdate; 
@required
-(BOOL)usePreferredItemOnNextUpdate;
-(void)setUsePreferredItemOnNextUpdate:(BOOL)arg1;
-(id<UIFocusItem>)preferredFocusItem;
-(void)setPreferredFocusItem:(id)arg1;

@end

