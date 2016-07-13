/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, July 13, 2016 at 11:49:58 AM Central European Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/12E1CB67-3672-460D-A66D-1980A9BFC6C0/pokemongo.app/pokemongo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <pokemongo/VideoPlayerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class AVPlayerViewController, VideoPlayer, CancelOnTouchView, UIColor, NSString;

@interface AVKitVideoPlayback : NSObject <VideoPlayerDelegate, UIViewControllerTransitioningDelegate> {

	AVPlayerViewController* videoViewController;
	VideoPlayer* videoPlayer;
	CancelOnTouchView* cancelOnTouchView;
	UIColor* bgColor;
	NSString* videoGravity;
	BOOL showControls;
	BOOL cancelOnTouch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)InitClass;
+(BOOL)IsSupported;
-(void)actuallyStartTheMovie:(id)arg1 ;
-(void)onPlayerReady;
-(void)onPlayerDidFinishPlayingVideo;
-(void)onPlayerError:(id)arg1 ;
-(id)initAndPlay:(id)arg1 bgColor:(id)arg2 showControls:(BOOL)arg3 videoGravity:(id)arg4 cancelOnTouch:(BOOL)arg5 ;
-(void)dealloc;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(void)finish;
@end

