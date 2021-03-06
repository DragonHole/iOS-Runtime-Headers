/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/BulletinBoardPlugins/MPDataProvider.bundle/MPDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUConversationManagerDelegate <NSObject>
@optional
-(void)conversationManager:(id)arg1 stateChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 activeRemoteParticipantsChangedForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 removedActiveConversation:(id)arg2;
-(void)conversationsChangedForConversationManager:(id)arg1;
-(void)conversationManager:(id)arg1 localVideoToggledForConversation:(id)arg2;
-(void)conversationManager:(id)arg1 remoteMembersChangedForConversation:(id)arg2;
-(void)serverDisconnectedForConversationManager:(id)arg1;

@end

