/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKConnection, NSString;

@interface WKWebProcessPlugInController : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundle> _bundle;
	RetainPtr<id<WKWebProcessPlugIn> >* _principalClassInstance;

}

@property (readonly) OpaqueWKBundleRef _bundleRef; 
@property (readonly) WKConnection * connection; 
@property (readonly) id parameters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(WKConnection *)connection;
-(id)parameters;
-(Object*)_apiObject;
-(void)_setPrincipalClassInstance:(id)arg1 ;
-(void)extendClassesForParameterCoder:(id)arg1 ;
-(OpaqueWKBundleRef)_bundleRef;
@end
