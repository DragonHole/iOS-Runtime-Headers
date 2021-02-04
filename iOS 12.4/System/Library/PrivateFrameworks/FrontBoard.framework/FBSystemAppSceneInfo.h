/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSSceneImpl, _UICanvas, UIWindow;

@interface FBSystemAppSceneInfo : NSObject {

	FBSSceneImpl* _scene;
	_UICanvas* _canvas;
	UIWindow* _primaryWindow;

}

@property (nonatomic,retain) FBSSceneImpl * scene;                         //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) _UICanvas * canvas;                           //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * primaryWindow;              //@synthesize primaryWindow=_primaryWindow - In the implementation block
-(UIWindow *)primaryWindow;
-(void)setPrimaryWindow:(UIWindow *)arg1 ;
-(void)setScene:(FBSSceneImpl *)arg1 ;
-(void)dealloc;
-(FBSSceneImpl *)scene;
-(_UICanvas *)canvas;
-(void)setCanvas:(_UICanvas *)arg1 ;
@end
