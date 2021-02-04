/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@protocol ICPaperStyleUIActivityDelegate;
@interface ICPaperStyleUIActivity : UIActivity {

	id<ICPaperStyleUIActivityDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICPaperStyleUIActivityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ICPaperStyleUIActivityDelegate>)arg1 ;
-(id<ICPaperStyleUIActivityDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(id)activityTitle;
-(long long)activityCategory;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
@end
