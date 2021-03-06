/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem {

	PKPaymentContentItem* _contentItem;

}

@property (nonatomic,readonly) PKPaymentContentItem * contentItem;              //@synthesize contentItem=_contentItem - In the implementation block
+(long long)dataType;
+(BOOL)supportsMultipleItems;
-(PKPaymentContentItem *)contentItem;
-(id)initWithContentItem:(id)arg1 ;
-(BOOL)isValidWithError:(id*)arg1 ;
@end

