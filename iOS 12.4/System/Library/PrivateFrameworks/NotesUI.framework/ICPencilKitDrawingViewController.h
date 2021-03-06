/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKCanvasViewDelegate.h>

@class ICAttachment, PKCanvasView, UIButton, ICAttachmentPencilKitModel, NSString;

@interface ICPencilKitDrawingViewController : UIViewController <PKCanvasViewDelegate> {

	ICAttachment* _attachment;
	PKCanvasView* _canvas;
	UIButton* _closeButton;

}

@property (nonatomic,retain) ICAttachment * attachment;                                   //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,readonly) ICAttachmentPencilKitModel * attachmentModel; 
@property (nonatomic,retain) PKCanvasView * canvas;                                       //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                      //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)canvasViewDrawingDidChange:(id)arg1 ;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIButton *)closeButton;
-(ICAttachmentPencilKitModel *)attachmentModel;
-(void)canvasViewDidStartNewStroke:(id)arg1 ;
-(void)viewDidLoad;
-(PKCanvasView *)canvas;
-(void)setCanvas:(PKCanvasView *)arg1 ;
-(void)done:(id)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
@end

