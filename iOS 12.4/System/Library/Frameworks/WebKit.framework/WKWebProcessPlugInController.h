/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(Object*)_apiObject;
-(void)_setPrincipalClassInstance:(id)arg1 ;
-(OpaqueWKBundleRef)_bundleRef;
-(void)extendClassesForParameterCoder:(id)arg1 ;
-(void)dealloc;
-(id)parameters;
-(WKConnection *)connection;
@end
