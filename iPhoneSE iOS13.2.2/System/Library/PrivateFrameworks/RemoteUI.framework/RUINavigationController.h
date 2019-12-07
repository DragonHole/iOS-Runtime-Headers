/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@class RUIStyle;

@interface RUINavigationController : UINavigationController {

	unsigned long long _ruiSupportedInterfaceOrientations;
	RUIStyle* _style;
	/*^block*/id _menuDismissalHandler;

}

@property (nonatomic,retain) RUIStyle * style;                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) id menuDismissalHandler;              //@synthesize menuDismissalHandler=_menuDismissalHandler - In the implementation block
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)setMenuDismissalHandler:(id)arg1 ;
-(void)_menuButtonPressed:(id)arg1 ;
-(id)menuDismissalHandler;
@end
