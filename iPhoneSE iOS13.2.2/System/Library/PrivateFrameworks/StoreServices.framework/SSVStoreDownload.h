/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject {

	NSDictionary* _properties;
	NSString* _preferredAssetFlavor;

}

@property (nonatomic,readonly) NSDictionary * properties;                //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * preferredAssetFlavor;              //@synthesize preferredAssetFlavor=_preferredAssetFlavor - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)properties;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(NSString *)preferredAssetFlavor;
@end
