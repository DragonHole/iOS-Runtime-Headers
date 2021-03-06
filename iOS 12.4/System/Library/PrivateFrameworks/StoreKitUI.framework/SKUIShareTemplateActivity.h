/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity {

	SKUIClientContext* _clientContext;
	SKUIShareSheetActivityViewElement* _viewElement;

}
-(id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2 ;
-(id)activityTitle;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)_beforeActivity;
@end

