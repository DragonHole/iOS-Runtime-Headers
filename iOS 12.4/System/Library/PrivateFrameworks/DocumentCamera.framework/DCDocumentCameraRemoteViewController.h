/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DCDocumentCameraRemoteViewController.h>

@protocol DCDocumentCameraRemoteViewController
@required
-(void)didCancel;
-(void)viewControllerWasDismissed;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1;
-(void)didFinishWithDocumentInfoCollection:(id)arg1;
-(void)dismiss;

@end


@protocol DCDocumentCameraPublicViewController;
@class UIViewController;

@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController <DCDocumentCameraRemoteViewController> {

	UIViewController*<DCDocumentCameraPublicViewController> _publicViewController;

}

@property (assign,nonatomic,__weak) UIViewController*<DCDocumentCameraPublicViewController> publicViewController;                                     //@synthesize publicViewController=_publicViewController - In the implementation block
@property (getter=viewServiceViewController,nonatomic,readonly) id<DCDocumentCameraViewServiceViewController> viewServiceViewController; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)didCancel;
-(id<DCDocumentCameraViewServiceViewController>)viewServiceViewController;
-(void)setPublicViewController:(UIViewController*<DCDocumentCameraPublicViewController>)arg1 ;
-(void)viewControllerWasDismissed;
-(void)viewServicePreferredSizeDidChange:(CGSize)arg1 ;
-(void)didFinishWithDocumentInfoCollection:(id)arg1 ;
-(UIViewController*<DCDocumentCameraPublicViewController>)publicViewController;
-(void)dismiss;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

