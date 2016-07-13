/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/pokemongo-Structs.h>
#import <libobjc.A.dylib/ADBannerViewDelegate.h>
#import <pokemongo/UnityViewControllerListener.h>

@class ADBannerView, NSString;

@interface UnityADBanner : NSObject <ADBannerViewDelegate, UnityViewControllerListener> {

	ADBannerView* _view;
	CGPoint _userLayoutCenter;
	int _bannerLayout;
	BOOL _showingBanner;

}

@property (nonatomic,copy,readonly) ADBannerView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) BOOL adVisible;                        //@synthesize showingBanner=_showingBanner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interfaceWillChangeOrientation:(id)arg1 ;
-(void)interfaceDidChangeOrientation:(id)arg1 ;
-(void)layoutBannerImpl;
-(float)layoutXImpl:(id)arg1 ;
-(float)layoutYImpl:(id)arg1 ;
-(void)initImpl:(id)arg1 layout:(int)arg2 type:(int)arg3 ;
-(id)initWithParent:(id)arg1 layout:(int)arg2 type:(int)arg3 ;
-(id)initWithParent:(id)arg1 layout:(int)arg2 ;
-(void)layoutBanner:(int)arg1 ;
-(void)positionForUserLayout:(CGPoint)arg1 ;
-(void)showBanner:(BOOL)arg1 ;
-(BOOL)adVisible;
-(void)dealloc;
-(ADBannerView *)view;
-(void)bannerViewDidLoadAd:(id)arg1 ;
-(void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2 ;
-(BOOL)bannerViewActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
-(void)bannerViewActionDidFinish:(id)arg1 ;
@end
