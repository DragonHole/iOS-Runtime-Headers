/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonChatItem.h>

@class NSArray, IMMessage, UIItemProvider;

@interface CKMessagePartChatItem : CKBalloonChatItem {

	NSArray* _visibleAssociatedMessageChatItems;

}

@property (nonatomic,copy,readonly) NSArray * messageAcknowledgments; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) char color; 
@property (nonatomic,copy,readonly) NSArray * pasteboardItems; 
@property (nonatomic,readonly) NSArray * visibleAssociatedMessageChatItems;              //@synthesize visibleAssociatedMessageChatItems=_visibleAssociatedMessageChatItems - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessageAcknowledgment; 
@property (nonatomic,readonly) NSRange messagePartRange; 
@property (nonatomic,readonly) BOOL hasMessageAcknowledgment; 
@property (nonatomic,readonly) BOOL hasStickers; 
@property (nonatomic,readonly) BOOL isCorrupt; 
@property (nonatomic,readonly) BOOL isBlackholed; 
@property (nonatomic,readonly) UIItemProvider * dragItemProvider; 
-(id)description;
-(id)time;
-(char)color;
-(IMMessage *)message;
-(id)sender;
-(BOOL)failed;
-(BOOL)canCopy;
-(BOOL)isFromMe;
-(BOOL)isCorrupt;
-(id)composition;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(void)configureBalloonView:(id)arg1 ;
-(NSRange)messagePartRange;
-(BOOL)canForward;
-(NSArray *)pasteboardItems;
-(BOOL)canSendAsTextMessage;
-(NSArray *)visibleAssociatedMessageChatItems;
-(UIItemProvider *)dragItemProvider;
-(BOOL)canSendMessageAcknowledgment;
-(BOOL)canAttachStickers;
-(BOOL)stickersSnapToPoint;
-(BOOL)hasMessageAcknowledgment;
-(id)votingCounts;
-(long long)selectedType;
-(BOOL)isBlackholed;
-(NSArray *)messageAcknowledgments;
-(id)aggregateAcknowledgmentChatItem;
-(BOOL)shouldShowVotingView;
-(BOOL)_isSURFRelatedMessage;
-(BOOL)hasStickers;
@end

