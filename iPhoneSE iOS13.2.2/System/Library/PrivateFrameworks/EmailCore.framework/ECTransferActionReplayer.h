/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
-(id)replayAction;
-(id)failActionWithError:(id)arg1 ;
-(id)_downLoadSourceMessagesInAction:(id)arg1 ;
-(id)_appendMessagesInAction:(id)arg1 ;
-(id)_transferItemsInAction:(id)arg1 isMove:(BOOL)arg2 ;
-(id)_deleteItemsInAction:(id)arg1 ;
-(id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id*)arg2 ;
@end
