/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSUpdatableAssetController.h>

@protocol SKUIJSUpdatableAssetController <JSExport>
@required
-(void)refreshCachedManifest:(id)arg1;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1;
-(id)newestCachedManifestVersion;

@end


@class SKUIClientContext;

@interface SKUIJSUpdatableAssetController : IKJSObject <SKUIJSUpdatableAssetController> {

	SKUIClientContext* _clientContext;

}
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 ;
-(void)refreshCachedManifest:(id)arg1 ;
-(id)currentManifestVersion;
-(id)loadResource:(id)arg1 ;
-(id)newestCachedManifestVersion;
@end

