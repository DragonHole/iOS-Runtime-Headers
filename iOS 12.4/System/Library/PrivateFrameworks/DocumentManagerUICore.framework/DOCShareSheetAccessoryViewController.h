/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DOCShareSheetBaseViewController.h>
#import <libobjc.A.dylib/DOCTagViewDelegate.h>

@interface DOCShareSheetAccessoryViewController : DOCShareSheetBaseViewController <DOCTagViewDelegate>
-(void)tagView:(id)arg1 didDeleteTag:(id)arg2 ;
-(BOOL)shouldShowAddTagButton;
-(void)addTagButtonPressed;
-(id)initWithHost:(id)arg1 itemLoader:(id)arg2 ;
-(void)loadView;
-(void)viewDidLoad;
@end
