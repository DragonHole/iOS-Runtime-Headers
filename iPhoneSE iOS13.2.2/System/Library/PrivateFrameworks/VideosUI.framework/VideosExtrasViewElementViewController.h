/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosExtrasElementViewController.h>

@class IKViewElement;

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController {

	BOOL _embedded;
	IKViewElement* _viewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                       //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,readonly) BOOL matchParentHeight; 
@property (assign,nonatomic) BOOL embedded;                                     //@synthesize embedded=_embedded - In the implementation block
@property (nonatomic,readonly) id preferredLayoutGuide; 
@property (nonatomic,readonly) long long preferredLayoutAttribute; 
-(void)viewDidLoad;
-(void)setEmbedded:(BOOL)arg1 ;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(BOOL)matchParentHeight;
-(BOOL)embedded;
-(id)preferredLayoutGuide;
-(long long)preferredLayoutAttribute;
@end
