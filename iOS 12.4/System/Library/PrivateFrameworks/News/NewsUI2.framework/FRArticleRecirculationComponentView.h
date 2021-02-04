/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/News/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/TSArticleRecirculationViewControllerDelegate.h>

@interface FRArticleRecirculationComponentView : SXComponentView <TSArticleRecirculationViewControllerDelegate> {

	 inArticleViewControllerProvider;
	 layoutInvalidator;

}
-(void)shouldPresentRecirculationController:(id)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 ;
-(void)presentComponentWithChanges:(SCD_Struct_FR0)arg1 ;
@end
