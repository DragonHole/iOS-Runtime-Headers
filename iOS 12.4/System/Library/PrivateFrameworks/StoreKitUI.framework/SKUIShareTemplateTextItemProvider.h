/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {

	SKUIClientContext* _clientContext;
	SKUIShareTemplateViewElement* _templateElement;

}
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
@end

