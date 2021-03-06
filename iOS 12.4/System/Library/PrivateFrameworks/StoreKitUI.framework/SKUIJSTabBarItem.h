/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSTabBarItem.h>
@class NSString, IKJSNavigationDocument;


@protocol SKUIJSTabBarItem <JSExport>
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
@required
-(IKJSNavigationDocument *)navigationDocument;
-(NSString *)rootURL;
-(NSString *)identifier;
-(NSString *)title;
-(void)setBadgeValue:(id)arg1;
-(NSString *)badgeValue;

@end


@class NSString, IKJSNavigationDocument, JSManagedValue, IKJSObject, SKUITabBarItem;

@interface SKUIJSTabBarItem : IKJSObject <SKUIJSTabBarItem> {

	JSManagedValue* _managedNavigationDocument;
	IKJSNavigationDocument* _navigationDocument;
	IKJSObject* _owner;
	SKUITabBarItem* _tabBarItem;

}

@property (nonatomic,readonly) SKUITabBarItem * tabBarItem;                              //@synthesize tabBarItem=_tabBarItem - In the implementation block
@property (nonatomic,retain) NSString * badgeValue; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
@property (nonatomic,readonly) NSString * rootURL; 
@property (nonatomic,readonly) NSString * title; 
-(IKJSNavigationDocument *)navigationDocument;
-(NSString *)rootURL;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 tabBarItem:(id)arg3 owner:(id)arg4 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)title;
-(void)setBadgeValue:(NSString *)arg1 ;
-(NSString *)badgeValue;
-(SKUITabBarItem *)tabBarItem;
@end

