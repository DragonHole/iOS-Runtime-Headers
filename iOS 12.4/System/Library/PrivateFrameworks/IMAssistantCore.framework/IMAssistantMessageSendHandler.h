/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAssistantCore/IMAssistantMessageHandler.h>
#import <libobjc.A.dylib/INSendMessageIntentHandling.h>

@class NSString, CNGeminiManager;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler <INSendMessageIntentHandling> {

	NSString* _conversationIdentifierResolvedDuringRecipientResolution;
	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;              //@synthesize geminiManager=_geminiManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleSendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveRecipientsForSendMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resolveContentForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(id)subscriptionContextForSenderIdentity:(id)arg1 ;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
-(long long)sendMessageWithText:(id)arg1 idsIdentifier:(id)arg2 toChat:(id)arg3 ;
-(void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)resolveMessageContentWithString:(id)arg1 ;
-(id)resolvedRecipientsFromChat:(id)arg1 ;
-(id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3 ;
-(id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg1 withContacts:(id)arg2 fromChats:(id)arg3 ;
-(id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg1 ;
-(id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2 account:(id)arg3 ;
-(id)handleResolutionResultForContact:(id)arg1 recipient:(id)arg2 account:(id)arg3 ;
-(BOOL)shouldContinueToExamineRelevantChatsWithMatches:(id)arg1 nextChat:(id)arg2 ;
-(id)imHandleForAnonymousContact:(id)arg1 chatAccount:(id)arg2 recipient:(id)arg3 ;
-(id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1 ;
-(id)contactsWithDuplicateNamesAmongContacts:(id)arg1 ;
@end
