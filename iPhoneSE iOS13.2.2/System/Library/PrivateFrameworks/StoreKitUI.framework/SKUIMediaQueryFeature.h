/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SKUIMediaQueryFeature : NSObject {

	NSString* _featureName;

}

@property (nonatomic,readonly) NSString * featureName;                   //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSArray * notificationNames; 
@property (nonatomic,readonly) NSArray * requiredKeys; 
+(BOOL)supportsFeatureName:(id)arg1 ;
-(NSString *)featureName;
-(NSArray *)requiredKeys;
-(id)initWithFeatureName:(id)arg1 value:(id)arg2 ;
-(BOOL)evaluateWithValues:(id)arg1 ;
-(NSArray *)notificationNames;
@end
