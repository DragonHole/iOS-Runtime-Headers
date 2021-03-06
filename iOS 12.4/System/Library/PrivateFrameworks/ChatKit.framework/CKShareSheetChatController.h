/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKComposeChatController.h>

@interface CKShareSheetChatController : CKComposeChatController {

	unsigned long long _interactionSignPost;
	BOOL _alreadySetUp;

}

@property (assign,nonatomic) BOOL alreadySetUp;              //@synthesize alreadySetUp=_alreadySetUp - In the implementation block
-(void)_beginInteractionSignPost;
-(void)_endInteractionSignPost;
-(void)sendComposition:(id)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(BOOL)alreadySetUp;
-(void)setAlreadySetUp:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
@end

