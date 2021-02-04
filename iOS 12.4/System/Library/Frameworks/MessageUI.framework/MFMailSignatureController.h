/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMailSignatureController : NSObject
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDefaultSignatureForSender:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)getDocument:(id)arg1 withHiddenSignatureHandler:(/*^block*/id)arg2 ;
-(id)_signatureStringForSender:(id)arg1 ;
@end
