/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>

@class IKTextFieldElement, NSString;

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate> {

	IKTextFieldElement* _associatedTextFieldElement;

}

@property (nonatomic,retain) IKTextFieldElement * associatedTextFieldElement;              //@synthesize associatedTextFieldElement=_associatedTextFieldElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)setAssociatedTextFieldElement:(IKTextFieldElement *)arg1 ;
-(IKTextFieldElement *)associatedTextFieldElement;
@end

