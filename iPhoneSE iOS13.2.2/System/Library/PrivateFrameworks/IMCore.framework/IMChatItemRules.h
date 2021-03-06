/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMChatItemRules <NSObject>
@required
-(id)_items;
-(void)_setItems:(id)arg1;
-(id)_chatItems;
-(id)_initWithChat:(id)arg1;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;

@end

