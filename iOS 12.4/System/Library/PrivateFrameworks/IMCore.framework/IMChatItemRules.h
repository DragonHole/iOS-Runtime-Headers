/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMChatItemRules <NSObject>
@required
-(id)_initWithChat:(id)arg1;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
-(BOOL)_shouldReloadChatItemWithAssociatedChatItems:(id)arg1 oldAssociatedChatItems:(id)arg2;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
-(id)_items;
-(void)_setItems:(id)arg1;

@end

