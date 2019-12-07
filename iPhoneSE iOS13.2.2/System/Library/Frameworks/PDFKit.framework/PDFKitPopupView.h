/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class PDFKitPopupViewPrivate, NSString;

@interface PDFKitPopupView : UIView <UITextViewDelegate> {

	PDFKitPopupViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeFromSuperview;
-(BOOL)becomeFirstResponder;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)doneButton:(id)arg1 ;
-(id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3 ;
-(void)_setupPopupView;
-(void)_presentPopupView;
-(void)_presentPopupView_iOS;
-(CGRect)_popoverControllerSourceRect;
-(void)_presentViewController:(id)arg1 ;
-(void)_removeControlForAnnotation;
-(void)_updateParentContents;
@end
