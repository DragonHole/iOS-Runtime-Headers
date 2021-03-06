/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@interface ICAlertController : UIAlertController {

	BOOL _didPerformAction;
	/*^block*/id _dissmissWithoutActionBlock;

}

@property (assign,nonatomic) BOOL didPerformAction;                    //@synthesize didPerformAction=_didPerformAction - In the implementation block
@property (nonatomic,copy) id dissmissWithoutActionBlock;              //@synthesize dissmissWithoutActionBlock=_dissmissWithoutActionBlock - In the implementation block
-(BOOL)didPerformAction;
-(void)setDidPerformAction:(BOOL)arg1 ;
-(id)dissmissWithoutActionBlock;
-(void)setDissmissWithoutActionBlock:(id)arg1 ;
-(void)dealloc;
@end

