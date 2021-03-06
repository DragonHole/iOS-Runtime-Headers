/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIFullscreenImageViewElement;

@interface SKUILockupViewElement : SKUIViewElement {

	char _enabled;
	long long _lockupViewType;
	BOOL _selectable;

}

@property (nonatomic,readonly) BOOL containsElementGroups; 
@property (nonatomic,readonly) SKUIFullscreenImageViewElement * fullscreenImage; 
@property (nonatomic,readonly) long long lockupViewType;                                      //@synthesize lockupViewType=_lockupViewType - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable;                           //@synthesize selectable=_selectable - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(SKUIFullscreenImageViewElement *)fullscreenImage;
-(long long)lockupViewType;
-(BOOL)containsElementGroups;
-(BOOL)isEnabled;
-(BOOL)isSelectable;
@end

