/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class PKPrinter;

@interface UIPrinterSetupDisplayPINViewController : UIViewController {

	PKPrinter* _printer;

}

@property (nonatomic,retain) PKPrinter * printer;              //@synthesize printer=_printer - In the implementation block
-(void)loadView;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(PKPrinter *)printer;
-(void)setPrinter:(PKPrinter *)arg1 ;
-(id)initWithPrinter:(id)arg1 ;
-(void)enterPIN;
-(void)showDisplayMessage:(long long)arg1 ;
@end

